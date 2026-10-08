// /Script/DatasmithContent.DatasmithSceneActor
// Derives from: AActor > UObject
// size 0x278, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithSceneActor.h

UCLASS(Config=Engine)
class ADatasmithSceneActor : public AActor
{
public:
    UPROPERTY(EditAnywhere) UDatasmithScene* Scene;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere) TMap<FName, TSoftObjectPtr<AActor>> RelatedActors;  // 0x0228, size 0x50
};
