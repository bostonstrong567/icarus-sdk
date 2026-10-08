// /Script/DatasmithContent.DatasmithRetessellationOptions
// size 0x14, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithImportOptions.h

USTRUCT()
struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) EDatasmithCADRetessellationRule RetessellationRule;  // 0x0010, size 0x1
};
