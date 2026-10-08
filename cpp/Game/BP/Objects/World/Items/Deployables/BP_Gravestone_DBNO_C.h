// /Game/BP/Objects/World/Items/Deployables/BP_Gravestone_DBNO.BP_Gravestone_DBNO_C
// Derives from: ABP_Gravestone_C > AGravestoneBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x8E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Gravestone_DBNO_C : public ABP_Gravestone_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x08D8, size 0x8

    UFUNCTION(BlueprintCallable) void ServerHandleAssignedPlayer();
};
