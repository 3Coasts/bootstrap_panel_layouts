<div class='onecolumn'>
  <?php if(!empty($content['header'])): ?>  
  <div class='header'>
    <div class='inside'>
      <?php print $content['header']; ?>
    </div>
  </div>
  <?php endif; ?>
  
  <?php if(!empty($content['center'])): ?>
  <div class='content'>
    <div class='inside'>
      <?php print $content['center']; ?>
    </div>
  </div>
  <?php endif; ?>
  
  <?php if(!empty($content['footer'])): ?>
  <div class='footer'>
    <div class='inside'>
      <?php print $content['footer']; ?>
    </div>
  </div>
<?php endif; ?>
</div>