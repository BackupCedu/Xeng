<?php 

global $base_url;

?>

<div class="chating_container">
	<div class="chat_title">
		<h3>Chatting</h3>
		<div class="online_user">
			<span>Online user</span>
		</div>
	</div>
	<div class="main_chat">
		<div id="content">
			<div id="chatList">
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_10" class="rowEven"> 
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(10);"></a>
					<span class="dateTime">(10:36:16)</span>
					<span class="admin" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">admin</span>: sdfsdf
				</div>
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_10" class="rowOdd"> 
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(10);"></a>
					<span class="dateTime">(10:36:16)</span>
					<span class="admin" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">admin</span>: sdfsdf
				</div>
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_10" class="rowEven"> 
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(10);"></a>
					<span class="dateTime">(10:36:16)</span>
					<span class="admin" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">admin</span>: sdfsdf
				</div>
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_15" class="rowOdd">
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(15);"> </a>
					<span class="dateTime">(10:53:24)</span> <span class="chatBot" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">ChatBot</span>: 
					<span class="chatBotMessage">admin has been logged out (Timeout).</span>
				</div>
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_15" class="rowEven">
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(15);"> </a>
					<span class="dateTime">(10:53:24)</span> <span class="chatBot" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">ChatBot</span>: 
					<span class="chatBotMessage">admin has been logged out (Timeout).</span>
				</div>
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_15" class="rowOdd">
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(15);"> </a>
					<span class="dateTime">(10:53:24)</span> <span class="chatBot" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">ChatBot</span>: 
					<span class="chatBotMessage">admin has been logged out (Timeout).</span>
				</div>
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_15" class="rowEven">
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(15);"> </a>
					<span class="dateTime">(10:53:24)</span> <span class="chatBot" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">ChatBot</span>: 
					<span class="chatBotMessage">admin has been logged out (Timeout).</span>
				</div>
				<div xmlns="http://www.w3.org/1999/xhtml" id="ajaxChat_m_15" class="rowOdd">
					<a class="delete" title="Delete this chat message" href="javascript:ajaxChat.deleteMessage(15);"> </a>
					<span class="dateTime">(10:53:24)</span> <span class="chatBot" dir="ltr" onclick="ajaxChat.insertText(this.firstChild.nodeValue);">ChatBot</span>: 
					<span class="chatBotMessage">admin has been logged out (Timeout).</span>
				</div>
			</div>
			
			<div id="box_input_container">
				<div id="inputFieldContainer">
					<textarea id="inputField" rows="1" cols="50" title="Press SHIFT+ENTER to input a line break" onkeypress="ajaxChat.handleInputFieldKeyPress(event);" onkeyup="ajaxChat.handleInputFieldKeyUp(event);"></textarea>
				</div>
				<div id="submitButtonContainer">
					<input type="button" id="submitButton" value="Gửi" onclick="ajaxChat.sendMessage();"><br>
					<span id="messageLengthCounter">0/1040</span>
				</div>
			</div>
			<div id="emoticonsContainer" dir="ltr">
				<a href="javascript:ajaxChat.insertText('%3A)');"><img src="chat/img/emoticons/smile.png" alt=":)" title=":)"></a><a href="javascript:ajaxChat.insertText('%3A(');"><img src="chat/img/emoticons/sad.png" alt=":(" title=":("></a><a href="javascript:ajaxChat.insertText('%3B)');"><img src="chat/img/emoticons/wink.png" alt=";)" title=";)"></a><a href="javascript:ajaxChat.insertText('%3AP');"><img src="chat/img/emoticons/razz.png" alt=":P" title=":P"></a><a href="javascript:ajaxChat.insertText('%3AD');"><img src="chat/img/emoticons/grin.png" alt=":D" title=":D"></a><a href="javascript:ajaxChat.insertText('%3A%7C');"><img src="chat/img/emoticons/plain.png" alt=":|" title=":|"></a><a href="javascript:ajaxChat.insertText('%3AO');"><img src="chat/img/emoticons/surprise.png" alt=":O" title=":O"></a><a href="javascript:ajaxChat.insertText('%3A%3F');"><img src="chat/img/emoticons/confused.png" alt=":?" title=":?"></a><a href="javascript:ajaxChat.insertText('8)');"><img src="chat/img/emoticons/glasses.png" alt="8)" title="8)"></a><a href="javascript:ajaxChat.insertText('8o');"><img src="chat/img/emoticons/eek.png" alt="8o" title="8o"></a><a href="javascript:ajaxChat.insertText('B)');"><img src="chat/img/emoticons/cool.png" alt="B)" title="B)"></a><a href="javascript:ajaxChat.insertText('%3A-)');"><img src="chat/img/emoticons/smile-big.png" alt=":-)" title=":-)"></a><a href="javascript:ajaxChat.insertText('%3A-(');"><img src="chat/img/emoticons/crying.png" alt=":-(" title=":-("></a><a href="javascript:ajaxChat.insertText('%3A-*');"><img src="chat/img/emoticons/kiss.png" alt=":-*" title=":-*"></a><a href="javascript:ajaxChat.insertText('O%3A-D');"><img src="chat/img/emoticons/angel.png" alt="O:-D" title="O:-D"></a><a href="javascript:ajaxChat.insertText('%3E%3A-D');"><img src="chat/img/emoticons/devilish.png" alt="&gt;:-D" title="&gt;:-D"></a><a href="javascript:ajaxChat.insertText('%3Ao)');"><img src="chat/img/emoticons/monkey.png" alt=":o)" title=":o)"></a><a href="javascript:ajaxChat.insertText('%3Aidea%3A');"><img src="chat/img/emoticons/idea.png" alt=":idea:" title=":idea:"></a><a href="javascript:ajaxChat.insertText('%3Aimportant%3A');"><img src="chat/img/emoticons/important.png" alt=":important:" title=":important:"></a><a href="javascript:ajaxChat.insertText('%3Ahelp%3A');"><img src="chat/img/emoticons/help.png" alt=":help:" title=":help:"></a><a href="javascript:ajaxChat.insertText('%3Aerror%3A');"><img src="chat/img/emoticons/error.png" alt=":error:" title=":error:"></a><a href="javascript:ajaxChat.insertText('%3Awarning%3A');"><img src="chat/img/emoticons/warning.png" alt=":warning:" title=":warning:"></a><a href="javascript:ajaxChat.insertText('%3Afavorite%3A');"><img src="chat/img/emoticons/favorite.png" alt=":favorite:" title=":favorite:"></a>
			</div>
			<div id="bbCodeContainer">
				<input type="button" value="b" title="Bold text: [b]text[/b]" onclick="ajaxChat.insertBBCode('b');" style="font-weight: bold;"> 
				<input type="button" value="i" title="Italic text: [i]text[/i]" onclick="ajaxChat.insertBBCode('i');" style="font-style: italic;"> 
				<input type="button" value="u" title="Underline text: [u]text[/u]" onclick="ajaxChat.insertBBCode('u');" style="text-decoration: underline;"> 
				<input type="button" value="Quote" title="Quote text: [quote]text[/quote] or [quote=author]text[/quote]" onclick="ajaxChat.insertBBCode('quote');"> 
				<input type="button" value="Code" title="Code display: [code]code[/code]" onclick="ajaxChat.insertBBCode('code');"> 
				<input type="button" value="URL" title="Insert URL: [url]http://example.org[/url] or [url=http://example.org]text[/url]" onclick="ajaxChat.insertBBCode('url');"> 
				<input type="button" value="Image" title="Insert image: [img]http://example.org/image.jpg[/img]" onclick="ajaxChat.insertBBCode('img');"> 
				<input type="button" value="Font Color" title="Font Color: [color=red]text[/color]" onclick="ajaxChat.showHide('colorCodesContainer', null);">
			</div>
			<div id="colorCodesContainer" style="display: none;" dir="ltr"></div>
			<div id="onlineListContainer">
				<div id="onlineList">
					<div id="ajaxChat_u_1" class="rowOdd">
						<a href="javascript:ajaxChat.toggleUserMenu('ajaxChat_um_1', 'admin', 1);" class="admin" title="Toggle user menu for admin">admin</a>
						<ul class="userMenu" id="ajaxChat_um_1">
							<li><a href="javascript:ajaxChat.sendMessageWrapper('/quit');">Logout</a></li>
							<li><a href="javascript:ajaxChat.sendMessageWrapper('/who');">List online users</a></li>
							<li><a href="javascript:ajaxChat.sendMessageWrapper('/ignore');">List ignored users</a></li>
							<li><a href="javascript:ajaxChat.sendMessageWrapper('/list');">List available channels</a></li>
							<li><a href="javascript:ajaxChat.insertMessageWrapper('/action ');">Describe action</a></li>
							<li><a href="javascript:ajaxChat.insertMessageWrapper('/roll ');">Roll dice</a></li>
							<li><a href="javascript:ajaxChat.insertMessageWrapper('/nick ');">Change username</a></li>
							<li><a href="javascript:ajaxChat.sendMessageWrapper('/join');">Enter private room</a></li>
							<li><a href="javascript:ajaxChat.sendMessageWrapper('/bans');">List banned users</a></li>
						</ul>
					</div>
				</div>
			</div>
			<div id="helpContainer" style="display: none;">
				<h3>Help</h3>
				<div id="helpList">
					<table>
						<tbody><tr class="rowOdd">
							<td class="desc">Join a channel:</td>
							<td class="code">/join Channelname</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">Create a private room (Registered
								users only):</td>
							<td class="code">/join</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Invite someone (e.g. to a private
								room):</td>
							<td class="code">/invite Username</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">Revoke invitation:</td>
							<td class="code">/uninvite Username</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Logout from Chat:</td>
							<td class="code">/quit</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">Private message:</td>
							<td class="code">/msg Username Text</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Open a private channel:</td>
							<td class="code">/query Username</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">Close a private channel:</td>
							<td class="code">/query</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Describe action:</td>
							<td class="code">/action Text</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">Describe action in private message:</td>
							<td class="code">/describe Username Text</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Ignore/accept messages from user:</td>
							<td class="code">/ignore Username</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">List ignored users:</td>
							<td class="code">/ignore</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Display user channel:</td>
							<td class="code">/whereis Username</td>
						</tr>

						<tr class="rowEven">
							<td class="desc">Kick a user (Moderators only):</td>
							<td class="code">/kick Username [Minutes banned]</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Unban a user (Moderators only):</td>
							<td class="code">/unban Username</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">List banned users (Moderators only):</td>
							<td class="code">/bans</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Display user IP (Moderators only):</td>
							<td class="code">/whois Username</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">List online users:</td>
							<td class="code">/who [Channelname]</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">List available channels:</td>
							<td class="code">/list</td>
						</tr>
						<tr class="rowEven">
							<td class="desc">Roll dice:</td>
							<td class="code">/roll [number]d[sides]</td>
						</tr>
						<tr class="rowOdd">
							<td class="desc">Change username:</td>
							<td class="code">/nick Username</td>
						</tr>
					</tbody></table>
				</div>
			</div>
		</div>

		<!-- <img src="images/box_chat.jpg" /> -->
	</div>
</div>