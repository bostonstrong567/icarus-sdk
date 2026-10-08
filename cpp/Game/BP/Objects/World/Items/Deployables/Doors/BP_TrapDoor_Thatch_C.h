// /Game/BP/Objects/World/Items/Deployables/Doors/BP_TrapDoor_Thatch.BP_TrapDoor_Thatch_C
// Derives from: ABP_Door_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x780, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TrapDoor_Thatch_C : public ABP_Door_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_BLD_TrapDoor_Thatch;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_C* BP_WeatherAudioComponent;  // 0x0778, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TrapDoor_Thatch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
