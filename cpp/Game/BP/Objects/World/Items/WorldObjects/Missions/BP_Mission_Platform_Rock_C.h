// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Platform_Rock.BP_Mission_Platform_Rock_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x330, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Platform_Rock_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0320, size 0x10

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
};
