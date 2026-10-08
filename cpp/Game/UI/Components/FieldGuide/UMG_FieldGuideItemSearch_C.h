// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemSearch.UMG_FieldGuideItemSearch_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemSearch_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* ClearSearchButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SearchBox_C* SearchBar;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFilterItems FilterItems;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPanelWidget* ResultsPaneRef;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UWidgetSwitcher* SwitcherRef;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCallable) void AttachExternalPanels(UPanelWidget* Results, UWidgetSwitcher* Switcher);  // parameters 0x10
    UFUNCTION() void BndEvt__UMG_FieldGuideItemSearch_ClearSearch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuideItemSearch_SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_FieldGuideItemSearch_SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemSearch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterItems__DelegateSignature(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void HideSearchShowAlt();
    UFUNCTION(BlueprintCallable) void PerformSearch();
    UFUNCTION(BlueprintCallable) void SelectedItem(FFieldGuideCategoriesRowHandle CategoryRow, FFieldGuideSubcategoriesRowHandle SubcategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void ShowSearchHideAlt();
};
