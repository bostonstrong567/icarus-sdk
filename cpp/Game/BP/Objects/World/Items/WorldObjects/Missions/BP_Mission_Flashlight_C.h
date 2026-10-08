// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Flashlight.BP_Mission_Flashlight_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x330, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Flashlight_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0328, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Flashlight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
