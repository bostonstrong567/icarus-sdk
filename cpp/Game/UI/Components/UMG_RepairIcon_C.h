// /Game/UI/Components/UMG_RepairIcon.UMG_RepairIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x294, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RepairIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Count;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRepairData RepairData;  // 0x0278, size 0x1C

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RepairIcon(int32 EntryPoint);  // parameters 0x4
};
