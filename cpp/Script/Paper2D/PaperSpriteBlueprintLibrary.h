// /Script/Paper2D.PaperSpriteBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteBlueprintLibrary.h

UCLASS()
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSlateBrush MakeBrushFromSprite(UPaperSprite* Sprite, int32 Width, int32 Height);  // parameters 0x98
};
