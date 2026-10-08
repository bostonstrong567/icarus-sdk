// /Game/BP/Tools/CheatFunctions/CaveTeleport/BP_CaveCheatMarker.BP_CaveCheatMarker_C
// Derives from: AActor > UObject
// size 0x258, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CaveCheatMarker_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UCavePrefabAsset> Prefab;  // 0x0230, size 0x28
};
