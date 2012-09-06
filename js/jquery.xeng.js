$(document).ready(function() {
    // When a link is clicked  
    $("a.tab").click(function() {
        // switch all tabs off  
        $(".active").removeClass("active");
        // switch this tab on  
        $(this).addClass("active");
        // slide all elements with the class 'content' up  
        $(".content_tab").hide();
        // Now figure out what the 'title' attribute value is and find the element with that id.  Then slide that down.  
        var content_show = $(this).attr("title");
        $("#" + content_show).show();
    });

    // tooltip
    $('.show_tooltip').hover(function() {
        $(this).find('.tooltip').show();
    }, function() {
        $(this).find('.tooltip').hide();
    });
    
    // close bottom bar
    $('.close_bar').bind('click', function() {
        $('.bottom_bar').remove();
    });

    // openid login
    $('a.openid').click(function() {
        xeng.auth($(this).attr('dir'));
    });
});
var xeng = {
    auth: function(sys) {
        var width = 700;
        var height = 500;
        var left = (screen.width/2)-(width/2);
        var top = (screen.height/2)-(height/2);
        var wnd = window.open (GLOBAL_BASE_URL + '/login/' + sys, sys, 'toolbar=no, location=no, directories=no, status=no, menubar=no, scrollbars=no, resizable=no, copyhistory=no, width='+width+', height='+height+', top='+top+', left='+left);
    },
    refresh: function() {
        window.location.reload();
    }
}