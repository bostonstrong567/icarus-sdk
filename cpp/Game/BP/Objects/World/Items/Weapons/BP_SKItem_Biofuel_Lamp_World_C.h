// /Game/BP/Objects/World/Items/Weapons/BP_SKItem_Biofuel_Lamp_World.BP_SKItem_Biofuel_Lamp_World_C
// Derives from: ABP_SKItem_Biofuel_Lamp_C > ABP_SkeletalItem_LightBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x608, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SKItem_Biofuel_Lamp_World_C : public ABP_SKItem_Biofuel_Lamp_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0600, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SKItem_Biofuel_Lamp_World(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
