// /Script/UMG.RichTextBlockImageDecorator
// Derives from: URichTextBlockDecorator > UObject
// size 0x30, declared in Engine/Source/Runtime/UMG/Public/Components/RichTextBlockImageDecorator.h

UCLASS(Abstract)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
    UPROPERTY(EditAnywhere) UDataTable* ImageSet;  // 0x0028, size 0x8

    // Virtual functions that start here:
    //   FindImageBrush
};
