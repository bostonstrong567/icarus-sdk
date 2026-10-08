// /Script/Paper2D.PaperFlipbook
// Derives from: UObject
// size 0x50, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h

UCLASS()
class UPaperFlipbook : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FramesPerSecond;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) TArray<FPaperFlipbookKeyFrame> KeyFrames;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* DefaultMaterial;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EFlipbookCollisionMode> CollisionSource;  // 0x0048, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumFrames() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumKeyFrames() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UPaperSprite* GetSpriteAtFrame(int32 FrameIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTotalDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValidKeyFrameIndex(int32 Index) const;  // parameters 0x5
};
