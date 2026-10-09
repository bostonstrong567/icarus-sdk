// /Script/Engine.TextRenderActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextRenderActor.h

UCLASS(MinimalAPI, Config=Engine)
class ATextRenderActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UTextRenderComponent* TextRender;  // 0x0220, size 0x8
};
