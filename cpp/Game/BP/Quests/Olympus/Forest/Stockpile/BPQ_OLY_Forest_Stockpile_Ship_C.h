// /Game/BP/Quests/Olympus/Forest/Stockpile/BPQ_OLY_Forest_Stockpile_Ship.BPQ_OLY_Forest_Stockpile_Ship_C
// Derives from: ABPQ_Stockpile_ShipContainer_C > AQuest > AIcarusActor > AActor > UObject
// size 0x483, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Stockpile_Ship_C : public ABPQ_Stockpile_ShipContainer_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0481, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x0482, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Stockpile_Ship(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
