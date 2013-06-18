<?php

$plugin = array(
  'title' => t('Program Finder'),
  'category' => t('Other'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_program_finder_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  $easy_reponsive_tabs_path = libraries_get_path('easyResponsiveTabs');
  drupal_add_js($easy_reponsive_tabs_path . '/easyResponsiveTabs.js');
  drupal_add_js(drupal_get_path('module', 'gsb_public_custom_blocks') . '/js/gsb_public_custom_blocks.js');
  $tabs = array(
    array(
        'title' => 'Full-Time Degree',
        '#markup' => '<a href="/programs/mba">MBA Program</a>
<p>This two-year, full-time general management program transforms the brightest, most passionate people in the world. Develop critical thinking and leadership in an innovative environment.</p>
<a href="/programs/msx">MSx Program</a>
<p>This one-year, full-time program is for mid-career professionals (at least eight years of work experience) who desire to develop their strengths in general management, leadership, and innovation.</p>
<a href="/programs/phd">PhD Program</a>
<p>Our rigorous, full-time doctoral program is for individuals pursuing a career in academic research and teaching focused on management.</p>'
      ),
    array(
        'title' => 'Executive Education',
        '#markup' => '<a href="/exed">Executive Education</a>
<p>These programs are designed to equip senior executives with the knowledge, relationships, and tools necessary to drive results at the highest levels of global management.</p>
<p>A top-level faculty, diverse and impressive group of peer students, and culture of forward-thinking innovation combine to illuminate the future of business, and energize your career.</p>
<p>A wide range of program offerings means you’ll find one that entices your mind and enhances your talents.</p>'
      ),
      array(
        'title' => 'General Management',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/programs/mba">MBA Program</a>
<p>The Stanford MBA Program creates leaders who change the world. In this two-year program, you’ll be exposed to new ways of thinking that make a valued and permanent impact on your future success.</p>
<a href="/sigm">Summer Institute for General Management</a>
<p>This intensive four-week residential program provides undergraduates and young professionals with the business knowledge that will help distinguish them from the crowd.</p>
</div>
<div class="column-b">
<a href="/programs/msx">MSx Program</a>
<p>This one-year, full-time program for mid-career professionals provides deep knowledge of the art and science of leadership in a concentrated, energetic environment.</p>
<a href="/exed">Executive Education</a>
<p>No two Stanford GSB Executive Education offerings are the same. You\'ll find a wide range of programs focusing on leadership development, managing team dynamics, international management and more.</p>
</div></div>'
      ),
      array(
        'title' => 'Global',
        '#markup' => '<a href="/ignite">Stanford Ignite</a>
<p>This unique certificate program helps innovators around the world without graduate-level business training to formulate, develop, and commercialize their business ideas.</p>
<p>Ignite is offered as a 9-week, part-time program in Bangalore, Beijing, Paris, and on the Stanford campus. A 4-week, full-time program is also available at Stanford.</p>
<a href="/exed/custom.html">Custom Programs</a>
<p>Our custom programs are designed to solve unique challenges faced by businesses around the world. Programs are tailored for specific needs to encourage participants to think strategically and effectively manage their organizations to grow and succeed in a global economy.</p>'
      ),
      array(
        'title' => 'Entrepreneurship',
        '#markup' => '<a href="/ignite">Stanford Ignite</a>
<p>A 9-week part-time program offered at Stanford, Bangalore, Beijing and Paris. This unique certificate program helps innovators formulate, develop, and commercialize their business ideas.</p>
<a href="/exed/epse">Social Innovation Programs</a>
<p>Our social innovation programs focus on developing leaders who can solve the world\'s most challenging problems in areas such as education, the environment, poverty, healthcare, and social justice.</p>
<a href="/exed/custom.html">Custom Programs</a>
<p>Stanford GSB works with select global corporate leaders to develop strategic solutions to their unique business challenges.</p>'
      ),
      array(
        'title' => 'Multidisciplinary',
        '#markup' => '<a href="/programs/mba">MBA Program</a>
<p>Your career goals may span multiple academic disciplines or areas of expertise. Nearly 20% of Stanford MBA students take advantage of a joint or dual degree to complement their MBA.</p>
<a href="/programs/msx">MSx Program</a>
<p>MSx Fellows take full advantage of interdisciplinary collaboration among Stanford’s seven schools, fueling the creation of innovative solutions to business and global issues.</p>
<a href="/programs/phd">PhD Program</a>
<p>The PhD program is designed to empower the next generation of academic thinkers. Candidates train in behavioral, economic, and mathematical sciences related to their chosen field.</p>'
      ),
      array(
        'title' => 'Online',
        '#markup' => '<a href="/news/headlines/prie-launch.html">Stanford Innovation and Entrepreneurship</a>
<p>This professional program empowers you to more effectively generate and implement new ideas and lead innovative teams and organizations.</p>
<p>Taught by world-renowned Stanford faculty, these courses are engaging, interactive, and full of useful practices and strategies that you can apply immediately.</p>
<p>Self-paced courses are available online. Earn a certificate on your own schedule.</p>'
      ),
      array(
        'title' => 'Undergraduate',
        '#markup' => '<a href="/sigm">Summer Institute for General Management</a>
<p>In a competitive job market, younger professionals need an edge.</p>
<p>This 4-week residential program can help you generate your own advantage by providing the knowledge and insight that distinguishes you from the crowd, and gets you the job.</p>'
      ),
  );
  return (object) array(
    'title' => t('Program Finder'),
    'content' => _gsb_public_custom_blocks_generate_tabs($tabs),
  );
}
