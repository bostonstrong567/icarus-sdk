// /Script/DatasmithContent.DatasmithTessellationOptions
// size 0x10, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithImportOptions.h

USTRUCT()
struct FDatasmithTessellationOptions
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float ChordTolerance;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float MaxEdgeLength;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float NormalTolerance;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) EDatasmithCADStitchingTechnique StitchingTechnique;  // 0x000C, size 0x1
};
