// /Game/UI/Components/UMG_FilterButton.UMG_FilterButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FilterButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* FilterButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SelectedImage;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPrimaryItemTypes FilterType;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor SelectedColour;  // 0x0298, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DefaultColour;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle TagQuery;  // 0x02E8, size 0x18

    UFUNCTION() void BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature(FTagQueriesRowHandle Query);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_UMG_FilterButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(FItemClassificationsIconsData ItemClassification);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void UpdateSelected(bool Selected);  // parameters 0x1
};
