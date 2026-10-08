// /Game/UI/Components/UMG_Spacer.UMG_Spacer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x289, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Spacer_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_122;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowDivider;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LeftRIghtPadding;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TopDownPadding;  // 0x0288, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Spacer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(bool ShowDivider);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
