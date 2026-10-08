// /Game/BP/Building/Concrete/BP_Building_Wall_Diagonal_Curved_Concrete.BP_Building_Wall_Diagonal_Curved_Concrete_C
// Derives from: ABP_Building_Wall_Diagonal_Curved_C > ABP_Building_Wall_Diagonal_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC60, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Wall_Diagonal_Curved_Concrete_C : public ABP_Building_Wall_Diagonal_Curved_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C58, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Wall_Diagonal_Curved_Concrete(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
