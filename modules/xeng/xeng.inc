<?php

class xeng {
	public static function getGame($gid) {
		return db_fetch_object(db_query('SELECT * FROM {games} WHERE gid=' . $gid));
	}

	public static function deleteGame($gid) {
		return db_query('DELETE FROM {games} WHERE gid=' . $gid);
	}

	public static function getGames($status = NULL) {
		$query = ' SELECT * FROM {games}';
		$query.= ' WHERE 1';
		if($status != NULL) {
			$query .= ' AND status=' . $status;
		}
		
		$query .= ' ORDER BY weight ASC';

		$result = db_query($query);
		$games  = array();
		
		while($row = db_fetch_object($result)) {
			$row->linkView = url('play/' . $row->gid);
			$row->linkEdit = url('admin/xeng/edit/' . $row->gid);
			$row->linkDelete = url('admin/xeng/delete/' . $row->gid);
			$games[] = $row;
		}

		return $games;
	}

	// Tang page views
	public static function pageView($gid) {
		return db_query('UPDATE {games} SET views = views + 1 WHERE gid=' . $gid);
	}
}