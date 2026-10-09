// /Script/UMG.RichTextBlockImageDecorator
// Derives from: URichTextBlockDecorator > UObject
// size 0x30, declared in Engine/Source/Runtime/UMG/Public/Components/RichTextBlockImageDecorator.h

UCLASS(Abstract)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) UDataTable* ImageSet;  // 0x0028, size 0x8

    // Virtual functions that start here:
    //   FindImageBrush
};
