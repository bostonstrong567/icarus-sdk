// /Script/Paper2D.PaperCharacter
// Derives from: ACharacter > APawn > AActor > UObject
// size 0x4C0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperCharacter.h

UCLASS(Config=Game)
class APaperCharacter : public ACharacter
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPaperFlipbookComponent* Sprite;  // 0x04B8, size 0x8
};
