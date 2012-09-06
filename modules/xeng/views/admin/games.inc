<?php
/*
 * @todo Admin page : List all game in database
 */

global $queries;
global $base_url;

?>
<style>
.game td {
	line-height: 32px;
}
.game td img {
	width: 45px;
	height: auto;
}
</style>
<table class="sticky-enabled sticky-table game">
	<thead class="tableHeader-processed">
		<tr>
			<th>Name</th>
			<th>ID</th>
			<th>Image</th>
			<th>Description</th>
			<th>Status</th>
			<th colspan="2">Operations</th>
		</tr>
	</thead>
	<tbody>
		<?php $index = 0 ?>
		<?php foreach($games as $type => $g) : ?>
		<?php $class = $index % 2 ? 'odd' : 'even' ?>
		<tr class="<?php echo $class ?>">
			<td>
				<?php echo $g->name ?>
			</td>
			<td>
				<?php echo $g->gid ?>
			</td>
			<td>
				<img src="<?php echo $base_url, '/', $g->image ?>" />
			</td>
			<td class="description">
				<?php echo $g->description ?>
			</td>
			<td>
				<?php echo $g->status ? 'Publish' : 'Unpublish' ?>
			</td>
			<td>
				<a href="<?php echo $g->linkEdit ?>">edit</a>
			</td>
			<td>
				<a href="<?php echo $g->linkDelete ?>">delete</a>
			</td>
		</tr>
		<?php $index++ ?>
		<?php endforeach ?>
	</tbody>
</table>