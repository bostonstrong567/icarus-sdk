// /Script/Paper2D.PaperGroupedSpriteActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperGroupedSpriteActor.h

UCLASS(Config=Engine)
class APaperGroupedSpriteActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPaperGroupedSpriteComponent* RenderComponent;  // 0x0220, size 0x8
};
