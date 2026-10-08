// /Game/BP/Objects/World/Delivery/BP_Resupply_TransportPod.BP_Resupply_TransportPod_C
// Derives from: ABP_Transport_Pod_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Resupply_TransportPod_C : public ABP_Transport_Pod_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04D0, size 0x8

    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
