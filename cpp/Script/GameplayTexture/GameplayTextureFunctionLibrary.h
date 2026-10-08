// /Script/GameplayTexture.GameplayTextureFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/GameplayTexture/Source/GameplayTexture/Public/GameplayTextureFunctionLibrary.h

UCLASS()
class UGameplayTextureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TArray<FColor> GetUniqueColours(UGameplayTexture* Texture);  // parameters 0x18
};
