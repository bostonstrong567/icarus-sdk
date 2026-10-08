// /Game/BP/Objects/World/Items/Deployables/Containers/BP_CaveWorm_Drop.BP_CaveWorm_Drop_C
// Derives from: ABP_Overflow_Bag_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CaveWorm_Drop_C : public ABP_Overflow_Bag_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecayableComponent* Decayable;  // 0x03B0, size 0x8
};
