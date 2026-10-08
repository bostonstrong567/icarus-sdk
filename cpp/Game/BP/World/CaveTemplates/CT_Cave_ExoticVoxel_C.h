// /Game/BP/World/CaveTemplates/CT_Cave_ExoticVoxel.CT_Cave_ExoticVoxel_C
// Derives from: AActor > UObject
// size 0x228, a blueprint class, blueprint

UCLASS(Config=Engine)
class ACT_Cave_ExoticVoxel_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0220, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
