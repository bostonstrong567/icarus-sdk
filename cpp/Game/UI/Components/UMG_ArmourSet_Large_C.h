// /Game/UI/Components/UMG_ArmourSet_Large.UMG_ArmourSet_Large_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ArmourSet_Large_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BonusName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Container;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Stats;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FArmourSetBonusRowHandle SetBonus;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Active;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ActivePieces;  // 0x029C, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ArmourSet_Large(int32 EntryPoint);  // parameters 0x4
};
