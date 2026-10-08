// /Script/Paper2D.PaperRuntimeSettings
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperRuntimeSettings.h

UCLASS(Config=Engine)
class UPaperRuntimeSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool bEnableSpriteAtlasGroups;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableTerrainSplineEditing;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bResizeSpriteDataToMatchTextures;  // 0x002A, size 0x1
};
