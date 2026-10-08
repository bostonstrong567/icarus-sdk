// /Game/BP/Building/Concrete/BP_Building_Wall_Curved_Half_L_Concrete.BP_Building_Wall_Curved_Half_L_Concrete_C
// Derives from: ABP_Building_Wall_Curved_Half_L_C > ABP_Building_Wall_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC68, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Wall_Curved_Half_L_Concrete_C : public ABP_Building_Wall_Curved_Half_L_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C60, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Wall_Curved_Half_L_Concrete(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
