// /Script/Paper2D.PaperFlipbookActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookActor.h

UCLASS(Config=Engine)
class APaperFlipbookActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPaperFlipbookComponent* RenderComponent;  // 0x0220, size 0x8
};
