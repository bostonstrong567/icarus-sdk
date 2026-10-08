// /Script/DatasmithContent.DatasmithCommonTessellationOptions
// Derives from: UDatasmithOptionsBase > UObject
// size 0x38, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithImportOptions.h

UCLASS(Config=EditorPerProjectUserSettings)
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FDatasmithTessellationOptions Options;  // 0x0028, size 0x10
};
