// /Game/BP/Building/ClayBrick/BP_Building_Roof_Peak_Connector_Clay_Brick.BP_Building_Roof_Peak_Connector_Clay_Brick_C
// Derives from: ABP_Building_Roof_Peak_Connector_C > ABP_Building_Ramp_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC78, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Roof_Peak_Connector_Clay_Brick_C : public ABP_Building_Roof_Peak_Connector_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C70, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Roof_Peak_Connector_Clay_Brick(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
