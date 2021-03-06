#pragma once

#include "Global.hpp"

#include "Expander.hpp"
class WidgetDecorator;

class ExpanderTop final : public Expander
{
    Q_OBJECT
    Q_DISABLE_COPY(ExpanderTop)
public:
    ExpanderTop() = delete;
    explicit ExpanderTop(WidgetDecorator* parent);
    virtual void reposition() override;
protected slots:
    virtual void mouseMoveEvent(QMouseEvent* event) override;
};
