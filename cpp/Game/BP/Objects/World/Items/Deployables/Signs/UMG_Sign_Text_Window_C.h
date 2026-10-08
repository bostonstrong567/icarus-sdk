// /Game/BP/Objects/World/Items/Deployables/Signs/UMG_Sign_Text_Window.UMG_Sign_Text_Window_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x380, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Sign_Text_Window_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonIcon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* ColorSelectionPanel;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox3;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox4;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox_IconSearch;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Tabs;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_ItemIcons;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Text1;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Text2;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Text3;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Text4;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Input;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_SignType;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TempString;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> MaxCharacters;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> SupportedColors;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor FontColor;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFontColorChanged FontColorChanged;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Sign_Base_C* SignReference;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USignIconListItem*> IconListItems;  // 0x0370, size 0x10

    UFUNCTION() void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ButtonIcon_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ButtonText_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox2_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox2_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox3_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox3_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox4_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox4_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox_IconSearch_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Sign_Text_Window(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FontColorChanged__DelegateSignature(FLinearColor NewColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GenerateItemList(TArray<FItemableRowHandle>& ValidItemables);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAppendedText(FText& OutText) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnColorSelected(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ParseText(const FText& InText, FString& Row1, FString& Row2, FString& Row3, FString& Row4);  // parameters 0x58
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProxyUpdateIcon(FItemableRowHandle IconRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ProxyUpdateText(FText Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetFontColor(FLinearColor Color);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateIconList(TArray<UObject*>& Items);  // parameters 0x10
};
