// /Game/BP/Settlement/UMG/UMG_Settlement_NPC_Info.UMG_Settlement_NPC_Info_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x398, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_NPC_Info_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Settler_Image;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettlerName;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPC SettlementNPC;  // 0x0278, size 0x120

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_NPC_Info(int32 EntryPoint);  // parameters 0x4
};
