// /Script/Engine.DynamicTextureInstance
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Level.h

USTRUCT()
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
    UPROPERTY() UTexture2D* Texture;  // 0x0028, size 0x8
    UPROPERTY() bool bAttached;  // 0x0030, size 0x1
    UPROPERTY() float OriginalRadius;  // 0x0034, size 0x4
};
