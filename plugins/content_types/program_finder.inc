<?php

$plugin = array(
  'title' => t('Program Finder'),
  'category' => t('Content Panes'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_program_finder_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  drupal_add_js(drupal_get_path('module', 'gsb_public_custom_blocks') . '/js/gsb_public_custom_blocks.js');
  $tabs = array(
    array(
        'title' => 'Full-Time Degree',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/programs/mba">MBA Program</a>
<p>This two-year, full-time general management program empowers and transforms the brightest, most passionate people in the world. You’ll develop your critical-thinking and personal leadership abilities in a creative and innovative environment that will help you cultivate your vision and build the foundation you need to make it a reality.</p>
<a href="/programs/msx">MSx Program</a>
<p>This 12-month, full-time program was designed specifically for mid-career professionals with at least eight years of work experience, and a desire to develop their strengths in general management, leadership, and innovation.</p></div><div class="column-b"><p>Participants, known as Stanford MSx Fellows, are a diverse representation of countries and companies around the world.</p>
<a href="/phd">PhD Program</a>
<p>This program creates tomorrow’s transformative researchers, teachers, and scholars. This rigorous, full-time program spans 4-5 years, and is suited for individuals pursuing a career in academic research and teaching focused on management. You’ll capitalize on intimate class size and deep faculty engagement to consider the problems and opportunities faced by both the academic and business communities.</p></div></div>'
      ),
    array(
        'title' => 'Executive Education',
        '#markup' => '<a href="/exed">Executive Education</a>
<p>This renowned six-week program is designed to equip senior executives with the knowledge, relationships, and tools necessary to drive results at the highest levels of global management. A top-level faculty, diverse and impressive group of peer students, and culture of forward-thinking innovation combine to illuminate the future of business, and energize your career. path A wide range of program offerings means you’ll find one that entices your mind and enhances your talents.</p>'
      ),
      array(
        'title' => 'General Management',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/programs/mba">MBA Program</a>
<p>The Stanford GSB MBA program creates transformative leaders who go on to change the world. Beyond concepts and skills, you’ll be exposed to new ways of thinking that make a valued and permanent impact on your future success. Students who pursue and MBA from Stanford are passionate about initiating change, and living a life of meaning and impact.</p>
<a href="/programs/msx">MSx Program</a>
<p>This 12-month full-time program is designed for mid-career professionals with at least eight years of work experience. The core curriculum is focused on general management, leadership, and innovation. Participants also have the opportunity to take electives at Stanford GSB and rest of Stanford University. Previously known as the Stanford Sloan Master’s Program, the MSx experience features a mix of corporate- and self-funded individuals from a broad range of industries and geographies.</p></div>
<div class="column-b"><a href="/exed">Executive Education</a>
<p>Just as no two professionals are alike, no two Stanford GSB Executive Education offerings are the same. You’ll find a wide range of programs spanning all management disciplines. Examples include: Executive Leadership Development: Analysis to Action, The Emerging CFO: Strategic Financial Leadership Program, The Executive Program for Women Leaders, The Stanford-N.U.S. Executive Program in International Management, and The Innovative CIO: Leadership, Innovation, and Global Change.</p>
<a href="/sigm">Summer Institute for General Management</a>
<p>This intensive four-week residential program is designed to help young professionals gain the business knowledge that will help distinguish themselves from the crowd - and get hired.</p></div></div>'
      ),
      array(
        'title' => 'Global',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/ignite">Stanford Ignite</a>
<p>This unique certificate program helps innovators  formulate, develop, and commercialize their business ideas. All classes are taught by Stanford GSB faculty, and prominent executives and investors participate as speakers, panelists, and mentors. Ignite is offered as a 9-week, part-time program at Stanford, as well as in Bangalore, Beijing, and Paris. A 4-week, full-time version of the program is available on the Stanford GSB campus. Stanford Ignite is intended for those without graduate-level business training.</p></div>
<div class="column-b"><a href="/exed/custom.html">Custom Programs</a>
<p>Our custom programs are designed to solve unique challenges faced by businesses of all kinds. Programs include a combination of highly interactive classroom sessions, in-depth case discussions, small group exercises, electronically mediated tools, and intensive study groups to encourage participants to think strategically and effectively manage their organizations to grow and succeed in a global economy.</p></div></div>'
      ),
      array(
        'title' => 'Entrepreneurship',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/ignite">Stanford Ignite</a>
<p>This is where world-changing ideas come to life. Entrepreneurial thinkers bring their concepts to Ignite, and learn to transform them into reality.</p>
<a href="/exed">Executive Education</a>
<p>A wide range of program offerings draws professionals from around the globe and across industries to evaluate the practical issues facing modern business and the challenges faced by today’s leaders. Program offerings encompass all business disciplines and career stages, and accommodate all schedules.</p></div>
<div class="column-b"><a href="/exed/epse">Social Innovation Programs</a>
<p>Executive Program for Nonprofit Leaders - during this two-week residential program, you’ll draw on leading-edge research and course offerings, integrating them with your own knowledge and experience to generate powerful, practical insights about leadership and management.</p>
<a href="/exed/custom.html">Custom Programs</a>
<p>Stanford GSB works with selected global corporate leaders to develop strategic solutions to their unique business challenges. The programs include a combination of highly interactive classroom sessions, case discussions, small group exercises, and other elements to encourage participants to think strategically.</p></div></div>'
      ),
      array(
        'title' => 'Multidisciplinary',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/programs/mba">MBA Program</a>
<p>Designed from the outset for individuals dedicated to transforming the world around them, the Stanford GSB MBA experience attracts the brightest, most passionate people in the world. Throughout this two-year residential program, you’ll develop your critical-thinking and personal leadership abilities, while you construct an invaluable global network of impressive professionals and faculty.</p>
<a href="/programs/msx">MSx Program</a>
<p>Formerly the Stanford Sloan Master’s Program, this intensive 12-month residential program is tailored to professionals with significant</p></div><div class="column-b"><p>managerial experience who are ready to move beyond past experience to higher levels of general management, key to the next phase of their careers.</p>
<a href="/phd">PhD Program</a>
<p>Designed specifically to empower the next generation of academic thinkers and educators, the PhD program is central to Stanford GSB’s overall  mission of creating transformative leaders who go on to change the world through ideas and action. Candidates train in behavioral, economic, and mathematical sciences related to their chosen field.</p></div></div>'
      ),
      array(
        'title' => 'Online',
        '#markup' => '<a href="/news/headlines/prie-launch.html">Stanford Innovation and Entrepreneurship</a>
<p>This professional certificate program empowers you to more effectively generate and implement new ideas and lead innovative teams and organizations. Taught by world-renowned Stanford faculty, these courses are engaging, interactive, and full of useful practices and strategies that you can apply immediately. Courses are available online, on your schedule. Topics include Marketing Across Channels, Prototyping, and Leading Innovation.</p>'
      ),
      array(
        'title' => 'Undergraduate',
        '#markup' => '<a href="/sigm">Summer Institute for General Management</a>
<p>In a competitive job market, younger professionals need an edge. This four-week residential program  can help you generate your own advantage by providing the knowledge and insight that distinguishes you from the crowd, and gets you the job.</p>'
      ),
  );
  return (object) array(
    'title' => t('Program Finder'),
    'content' => _gsb_public_custom_blocks_generate_tabs($tabs),
  );
}
