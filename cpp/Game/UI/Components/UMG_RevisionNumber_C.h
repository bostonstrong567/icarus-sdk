// /Game/UI/Components/UMG_RevisionNumber.UMG_RevisionNumber_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RevisionNumber_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RevNumber;  // 0x0268, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RevisionNumber(int32 EntryPoint);  // parameters 0x4
};
