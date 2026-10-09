// /Script/ImageWriteQueue.ImageWriteOptions
// size 0x60, declared in Engine/Source/Runtime/ImageWriteQueue/Public/ImageWriteBlueprintLibrary.h

USTRUCT()
struct FImageWriteOptions
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDesiredImageFormat Format;  // 0x0000, size 0x1
    UPROPERTY(BlueprintReadWrite) FOnImageWriteComplete OnComplete;  // 0x0004, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CompressionQuality;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverwriteFile;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAsync;  // 0x0019, size 0x1
    TFunction<void __cdecl(bool)> NativeOnComplete;  // 0x0020, not reflected
};
