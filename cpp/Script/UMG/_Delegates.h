DELEGATE() ECheckBoxState GetCheckBoxState();  // parameters 0x1
DELEGATE() ESlateVisibility GetSlateVisibility();  // parameters 0x1
DELEGATE() FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
DELEGATE() FEventReply OnReply();  // parameters 0xB8
DELEGATE() FLinearColor GetLinearColor();  // parameters 0x10
DELEGATE() FSlateBrush GetSlateBrush();  // parameters 0x88
DELEGATE() FSlateColor GetSlateColor();  // parameters 0x28
DELEGATE() FText GetText();  // parameters 0x18
DELEGATE() FText GetText();  // parameters 0x18
DELEGATE() TEnumAsByte<EMouseCursor> GetMouseCursor();  // parameters 0x1
DELEGATE() UUserWidget* GetUserWidget();  // parameters 0x8
DELEGATE() UWidget* CustomWidgetNavigationDelegate(EUINavigation Navigation);  // parameters 0x10
DELEGATE() UWidget* GenerateWidgetForObject(UObject* Item);  // parameters 0x10
DELEGATE() UWidget* GenerateWidgetForString(FString Item);  // parameters 0x18
DELEGATE() UWidget* GetWidget();  // parameters 0x8
DELEGATE() bool GetBool();  // parameters 0x1
DELEGATE() float GetFloat();  // parameters 0x4
DELEGATE() int32 GetInt32();  // parameters 0x4
DELEGATE() void DownloadImageDelegate(UTexture2DDynamic* Texture);  // parameters 0x8
DELEGATE() void OnButtonClickedEvent();
DELEGATE() void OnButtonHoverEvent();
DELEGATE() void OnButtonPressedEvent();
DELEGATE() void OnButtonReleasedEvent();
DELEGATE() void OnCheckBoxComponentStateChanged(bool bIsChecked);  // parameters 0x1
DELEGATE() void OnConstructEvent();
DELEGATE() void OnControllerCaptureBeginEvent();
DELEGATE() void OnControllerCaptureEndEvent();
DELEGATE() void OnDragDropMulticast(UDragDropOperation* Operation);  // parameters 0x8
DELEGATE() void OnEditableTextBoxChangedEvent(const FText& Text);  // parameters 0x18
DELEGATE() void OnEditableTextBoxCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
DELEGATE() void OnEditableTextChangedEvent(const FText& Text);  // parameters 0x18
DELEGATE() void OnEditableTextCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
DELEGATE() void OnExpandableAreaExpansionChanged(UExpandableArea* Area, bool bIsExpanded);  // parameters 0x9
DELEGATE() void OnFloatValueChangedEvent(float Value);  // parameters 0x4
DELEGATE() void OnGameWindowCloseButtonClickedDelegate();
DELEGATE() void OnGetItemChildrenDynamic(UObject* Item, TArray<UObject*>& Children);  // parameters 0x18
DELEGATE() void OnHoveredWidgetChanged(UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent);  // parameters 0x10
DELEGATE() void OnInputAction();
DELEGATE() void OnIsSelectingKeyChanged();
DELEGATE() void OnItemExpansionChangedDynamic(UObject* Item, bool bIsExpanded);  // parameters 0x9
DELEGATE() void OnItemIsHoveredChangedDynamic(UObject* Item, bool bIsHovered);  // parameters 0x9
DELEGATE() void OnKeySelected(FInputChord SelectedKey);  // parameters 0x20
DELEGATE() void OnListEntryGeneratedDynamic(UUserWidget* Widget);  // parameters 0x8
DELEGATE() void OnListEntryInitializedDynamic(UObject* Item, UUserWidget* Widget);  // parameters 0x10
DELEGATE() void OnListEntryReleasedDynamic(UUserWidget* Widget);  // parameters 0x8
DELEGATE() void OnListItemScrolledIntoViewDynamic(UObject* Item, UUserWidget* Widget);  // parameters 0x10
DELEGATE() void OnListItemSelectionChangedDynamic(UObject* Item, bool bIsSelected);  // parameters 0x9
DELEGATE() void OnMenuOpenChangedEvent(bool bIsOpen);  // parameters 0x1
DELEGATE() void OnMouseCaptureBeginEvent();
DELEGATE() void OnMouseCaptureEndEvent();
DELEGATE() void OnMultiLineEditableTextBoxChangedEvent(const FText& Text);  // parameters 0x18
DELEGATE() void OnMultiLineEditableTextBoxCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
DELEGATE() void OnMultiLineEditableTextChangedEvent(const FText& Text);  // parameters 0x18
DELEGATE() void OnMultiLineEditableTextCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
DELEGATE() void OnOpeningEvent();
DELEGATE() void OnSelectionChangedEvent(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x11
DELEGATE() void OnSpinBoxBeginSliderMovement();
DELEGATE() void OnSpinBoxValueChangedEvent(float InValue);  // parameters 0x4
DELEGATE() void OnSpinBoxValueCommittedEvent(float InValue, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x5
DELEGATE() void OnUserScrolledEvent(float CurrentOffset);  // parameters 0x4
DELEGATE() void OnVisibilityChangedEvent(ESlateVisibility InVisibility);  // parameters 0x1
DELEGATE() void OnWidgetAnimationPlaybackStatusChanged();
DELEGATE() void SimpleListItemEventDynamic(UObject* Item);  // parameters 0x8
DELEGATE() void WidgetAnimationDynamicEvent();
DELEGATE() void WidgetAnimationDynamicEvents();
DELEGATE() void WidgetAnimationResult();
