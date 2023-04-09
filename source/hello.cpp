





// WApplication *createApplication(const WEnvironment &env)
// {
//   WApplication *app = new WApplication(env);
//   app->setTitle('Technofit');
//   // useStyleSheet('../../docroot/static/css/my.css');
//   // useStyleSheet('../../docroot/static/css/bootstrap.css');  
//   WText* response = new WText('', app->root());
//   response = new Wt::WText('', XHTMLUnsafeText, app->root());
//   response->setText('<div class='card mb-4 rounded-3 shadow-sm'>'
//                      '<div class='card-header py-3'>' 
//                        ' <h4 class='my-0 fw-normal'>Name</h4>'
//                      ' </div>'
//                       '<div class='card-body'>'
//                        ' <h1 class='card-title pricing-card-title'><img src='..//static/img/icons8-сердце-с-пульсом-48.png' alt=''>'
//                         '  <small class='text-body-secondary fw-light'> :100</small>'
//                        ' </h1>'
//                         '<h1 class='card-title pricing-card-title'><img src='..//static/img/icons8-кислород-64.png' alt=''>'
//                          ' <small class='text-body-secondary fw-light'>:93</small>'
//                        ' </h1>'
//                        ' <h1 class='card-title pricing-card-title'><img src='..//static/img/icons8-температура-64.png' alt=''>'
//                        '   <small class='text-body-secondary fw-light'>:36,5</small>'
//                       '  </h1>'
//                     '  </div>'
//                     '</div>'
//   )
//   // auto container = std::make_unique<Wt::WContainerWidget>();
//   // container->addWidget(std::make_unique<Wt::WText>('asdasd'));
//   // root()->addWidget(std::move(container));
//   return app;
// }


// auto t = std::make_unique<WTemplate>();
// t->setTemplateText('<div> How old are you, ${friend} ? ${age-input} </div>');
 
// t->bindString('friend', userName, TextFormat::Plain);
// ageEdit_ = t->bindWidget('age-input', std::make_unique<WLineEdit>());



#include <memory>
#include <Wt/WApplication.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WLineEdit.h>
#include <Wt/WPushButton.h>
#include <Wt/WText.h>
#include <Wt/WFileResource.h>

/*
 * A simple hello world application class which demonstrates how to react
 * to events, read input, and give feed-back.
 */
class HelloApplication : public Wt::WApplication
{
public:
  HelloApplication(const Wt::WEnvironment& env);

private:
  Wt::WText *htmlTry;
  Wt::WText *greeting_;

  void greet();
};

HelloApplication::HelloApplication(const Wt::WEnvironment& env)
  : WApplication(env)
{
  this->useStyleSheet("static/css/my.css");
  this->useStyleSheet("static/css/bootstrap.css");
  setTitle("Technofit");                         
  htmlTry = root()->addWidget(std::make_unique<Wt::WText>("",  Wt::TextFormat::UnsafeXHTML)); // show some text
  htmlTry->setText(  "<head>"
   " <meta name='viewport' content='width=device-width' />"
 " </head>"
 " <body>"
  "  <div class='wrapper'>"
 "     <header class='container-fluid sticky-top'>"
  "      <a class='logo' href='#'><img src='#' /></a>"
   "     <ul class='headerul'>"
     "     <li class='mt-3'><a class='headera' href='#'>Data recovery</a></li>"
       "   <li class='mt-3'><a class='headera' href='#'>Archive</a></li>"
       "   <li class='mt-3'><a class='headera' href='#'>Prediction</a></li>"
       " </ul>"
      "</header>"
  
          " <main>"
          " <div class='container'>"
          "<div class='row'>"
          "  <div class='col-3'>"
             " <div class='card mb-4 rounded-3 shadow-sm'>"
              "  <div class='card-header py-3'>"
                 " <h4 class='my-0 fw-normal'>Name</h4>"
              "  </div>"
               " <div class='card-body'>"
                 " <h1 class='card-title pricing-card-title'><img src='static/img/icons8-сердце-с-пульсом-48.png' alt=''>"
                   " <small class='text-body-secondary fw-light'> :100</small>"
                 " </h1>"
                "  <h1 class='card-title pricing-card-title'><img src='static/img/icons8-кислород-64.png' alt=''>"
                 "   <small class='text-body-secondary fw-light'>:93</small>"
                "  </h1>"
               "   <h1 class='card-title pricing-card-title'><img src='static/img/icons8-температура-64.png' alt=''>"
               "     <small class='text-body-secondary fw-light'>:36,5</small>"
               "   </h1>"
              "  </div>"
            "  </div>"
          "  </div>"
          "  <div class='col-3' class='braclet'>"
            "  <div class='card mb-4 rounded-3 shadow-sm'>"
                "<div class='card-header py-3'>"
               "   <h4 class='my-0 fw-normal'>Name</h4>"
               " </div>"
               " <div class='card-body'>"
               "   <h1 class='card-title pricing-card-title'><img src='static/img/icons8-сердце-с-пульсом-48.png' alt=''>"
                "    <small class='text-body-secondary fw-light'>:120</small>"
               "   </h1>"
                 " <h1 class='card-title pricing-card-title'><img src='static/img/icons8-кислород-64.png' alt=''>"
                 "   <small class='text-body-secondary fw-light'>:99</small>"
                 " </h1>"
                 " <h1 class='card-title pricing-card-title'><img src='static/img/icons8-температура-64.png' alt=''>"
                 "   <small class='text-body-secondary fw-light'>:36,7</small>"
                 " </h1>"
                "</div>"
             " </div>"
           " </div>"
            "<div class='col-3'>"
              "<div class='card mb-4 rounded-3 shadow-sm'>"
             "   <div class='card-header py-3'>"
               "   <h4 class='my-0 fw-normal'>Name</h4>"
             "   </div>"
             "   <div class='card-body'>"
              "    <h1 class='card-title pricing-card-title'><img src='static/img/icons8-сердце-с-пульсом-48.png' alt=''>"
               "     <small class='text-body-secondary fw-light'> :95</small>"
              "    </h1>"
              "    <h1 class='card-title pricing-card-title'><img src='static/img/icons8-кислород-64.png' alt=''>"
                 "   <small class='text-body-secondary fw-light'>:95</small>"
                "  </h1>"
               "   <h1 class='card-title pricing-card-title'><img src='static/img/icons8-температура-64.png' alt=''>"
                "    <small class='text-body-secondary fw-light'>:36,6</small>"
               "   </h1>"
              "  </div>"
             " </div>"
           " </div>"
           " <div class='col-3'>"
           "   <div class='card mb-4 rounded-3 shadow-sm'>"
           "     <div class='card-header py-3'>"
             "     <h4 class='my-0 fw-normal'>Add new...</h4>"
            "    </div>"
             "   <div class='card-body'>"
              "    <a class='logo' href='#'>"
               "     <img class='plus' src='static/img/icons8-плюс (1).svg' />"
             "     </a>"
             "     </h1>"
           "     </div>"
           "   </div>"
         "   </div>"
       "   </div>"
        
       " </div> "
       "</main>"
      "    <footer class='d-flex flex-wrap justify-content-between align-items-center py-3 border-top>"
       " <div class='col-md-4 d-flex align-items-center'>"
       "   <span class='mb-3 mb-md-0 text-muted'>© 2023 TechnoFit, Inc</span>"
      " </div>"
      "</footer>"
          );                         

  // auto button = root()->addWidget(std::make_unique<Wt::WPushButton>('Greet me.'));
  //                                                     // create a button
  // button->setMargin(5, Wt::Side::Left);                   // add 5 pixels margin

  // root()->addWidget(std::make_unique<Wt::WBreak>());    // insert a line break
  // greeting_ = root()->addWidget(std::make_unique<Wt::WText>()); // empty text

  /*
   * Connect signals with slots
   *
   * - simple Wt-way: specify object and method
   */
  // button->clicked().connect(this, &HelloApplication::greet);

  /*
   * - using an arbitrary function object, e.g. useful to bind
   *   values with std::bind() to the resulting method call
   */
  // nameEdit_->enterPressed().connect(std::bind(&HelloApplication::greet, this));

  /*
   * - using a lambda:
   */
  // button->clicked().connect([=]() {
  //     std::cerr << 'Hello there, ' << nameEdit_->text() << std::endl;
  // });
}

void HelloApplication::greet()
{
  /*
   * Update the text, using text input into the nameEdit_ field.
   */
  // greeting_->setText('Hello there, ' + nameEdit_->text());
}

int main(int argc, char **argv)
{
  /*
   * Your main method may set up some shared resources, but should then
   * start the server application (FastCGI or httpd) that starts listening
   * for requests, and handles all of the application life cycles.
   *
   * The last argument to WRun specifies the function that will instantiate
   * new application objects. That function is executed when a new user surfs
   * to the Wt application, and after the library has negotiated browser
   * support. The function should return a newly instantiated application
   * object.
   */
  return Wt::WRun(argc, argv, [](const Wt::WEnvironment &env) {
    /*
     * You could read information from the environment to decide whether
     * the user has permission to start a new application
     */
    return std::make_unique<HelloApplication>(env);
  });
}
