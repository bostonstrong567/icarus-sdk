// /Script/DatasmithContent.DatasmithContentBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/DatasmithContentBlueprintLibrary.h

UCLASS()
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UDatasmithAssetUserData* GetDatasmithUserData(UObject* Object);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static FString GetDatasmithUserDataValueForKey(UObject* Object, FName Key);  // parameters 0x20
};
