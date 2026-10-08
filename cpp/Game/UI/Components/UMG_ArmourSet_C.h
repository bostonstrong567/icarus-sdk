// /Game/UI/Components/UMG_ArmourSet.UMG_ArmourSet_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ArmourSet_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BonusName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Container;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Stats;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FArmourSetBonusRowHandle SetBonus;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Active;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ActivePieces;  // 0x02A4, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ArmourSet(int32 EntryPoint);  // parameters 0x4
};
