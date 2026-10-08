// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Overflow_Bag_Gravestone.BP_Overflow_Bag_Gravestone_C
// Derives from: ABP_Overflow_Bag_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Overflow_Bag_Gravestone_C : public ABP_Overflow_Bag_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_C* BP_UIProjectionComponent;  // 0x03B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Overflow_Bag_Gravestone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void NetMulticast_Unstuck(FVector NewLocation);  // parameters 0xC
};
