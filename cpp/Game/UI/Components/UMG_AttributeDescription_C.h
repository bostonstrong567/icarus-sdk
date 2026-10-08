// /Game/UI/Components/UMG_AttributeDescription.UMG_AttributeDescription_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x364, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AttributeDescription_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusStatDescription StatDescription;  // 0x0270, size 0xF0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatValue;  // 0x0360, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_AttributeDescription(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(FIcarusStatDescription StatDescription, int32 Value);  // parameters 0xF4
};
