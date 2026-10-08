// /Script/DatasmithContent.DatasmithAssetUserData
// Derives from: UAssetUserData > UObject
// size 0x78, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithAssetUserData.h

UCLASS(EditInlineNew)
class UDatasmithAssetUserData : public UAssetUserData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, FString> MetaData;  // 0x0028, size 0x50
};
