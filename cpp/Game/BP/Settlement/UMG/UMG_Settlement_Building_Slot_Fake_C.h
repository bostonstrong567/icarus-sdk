// /Game/BP/Settlement/UMG/UMG_Settlement_Building_Slot_Fake.UMG_Settlement_Building_Slot_Fake_C
// Derives from: UUMG_Settlement_Building_Slot_C > UUserWidget > UWidget > UVisual > UObject
// size 0x4A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_Building_Slot_Fake_C : public UUMG_Settlement_Building_Slot_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPC NPCOverride;  // 0x0370, size 0x120
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle TaskOverride;  // 0x0490, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_Building_Slot_Fake(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NPCSelected(UObject* Object);  // parameters 0x8
};
