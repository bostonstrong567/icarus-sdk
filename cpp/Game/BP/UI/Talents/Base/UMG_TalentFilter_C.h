// /Game/BP/UI/Talents/Base/UMG_TalentFilter.UMG_TalentFilter_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentFilter_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SearchBox_C* SearchBar;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTalentViewInterface* TalentView;  // 0x0278, size 0x8

    UFUNCTION() void BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_TalentFilter_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentFilter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HighlightTalents();
    UFUNCTION(BlueprintCallable) void Setup(UTalentViewInterface* View, bool ShowClear);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateTextFilter(FText TextIn);  // parameters 0x18
};
