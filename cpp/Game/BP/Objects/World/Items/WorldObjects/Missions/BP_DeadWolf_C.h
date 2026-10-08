// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_DeadWolf.BP_DeadWolf_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeadWolf_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_2;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_0;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0358, size 0x10

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
};
