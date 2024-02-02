
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x04
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                                                                  = 0,
	Layout_LabelCenter                                                               = 1,
	Layout_LabelBottom                                                               = 2,
	Layout_MAX                                                                       = 3
};

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMeterChannelInfo
{ 
	float                                              MeterValue;                                                 // 0x0000   (0x0004)  
	float                                              PeakValue;                                                  // 0x0004   (0x0004)  
	float                                              ClippingValue;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
struct FAudioMeterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        MeterValueImage;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x00E0   (0x00D0)  
	FSlateBrush                                        MeterBackgroundImage;                                       // 0x01B0   (0x00D0)  
	FSlateBrush                                        MeterValueBackgroundImage;                                  // 0x0280   (0x00D0)  
	FSlateBrush                                        MeterPeakImage;                                             // 0x0350   (0x00D0)  
	FVector2D                                          MeterSize;                                                  // 0x0420   (0x0010)  
	FVector2D                                          MeterPadding;                                               // 0x0430   (0x0010)  
	float                                              MeterValuePadding;                                          // 0x0440   (0x0004)  
	float                                              PeakValueWidth;                                             // 0x0444   (0x0004)  
	FVector2D                                          ValueRangeDb;                                               // 0x0448   (0x0010)  
	bool                                               bShowScale;                                                 // 0x0458   (0x0001)  
	bool                                               bScaleSide;                                                 // 0x0459   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x045A   (0x0002)  MISSED
	float                                              ScaleHashOffset;                                            // 0x045C   (0x0004)  
	float                                              ScaleHashWidth;                                             // 0x0460   (0x0004)  
	float                                              ScaleHashHeight;                                            // 0x0464   (0x0004)  
	int32_t                                            DecibelsPerHash;                                            // 0x0468   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x046C   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0470   (0x0058)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x04C8   (0x0008)  MISSED
};

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0580 (0x000150 - 0x0006D0)
class UAudioMeter : public UWidget
{ 
public:
	TArray<FMeterChannelInfo>                          MeterChannelInfo;                                           // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,1953) /* FDelegateProperty */     __um(MeterChannelInfoDelegate);                             // 0x0160   (0x0010)  
	FAudioMeterStyle                                   WidgetStyle;                                                // 0x0170   (0x04D0)  
	SDK_UNDEFINED(1,1954) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x0640   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0641   (0x0003)  MISSED
	FLinearColor                                       BackgroundColor;                                            // 0x0644   (0x0010)  
	FLinearColor                                       MeterBackgroundColor;                                       // 0x0654   (0x0010)  
	FLinearColor                                       MeterValueColor;                                            // 0x0664   (0x0010)  
	FLinearColor                                       MeterPeakColor;                                             // 0x0674   (0x0010)  
	FLinearColor                                       MeterClippingColor;                                         // 0x0684   (0x0010)  
	FLinearColor                                       MeterScaleColor;                                            // 0x0694   (0x0010)  
	FLinearColor                                       MeterScaleLabelColor;                                       // 0x06A4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x06B4   (0x001C)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                        // [0x151bac0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                   // [0x151b9b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                        // [0x151b8a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                         // [0x151b790] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                     // [0x151b680] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                              // [0x151b5d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                   // [0x151b4c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                        // [0x151b270] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                   // [0x2119480] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                      // [0x151afa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0220 (0x000150 - 0x000370)
class UAudioRadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	SDK_UNDEFINED(16,1955) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0154   (0x0010)  
	SDK_UNDEFINED(1,1956) /* TEnumAsByte<EAudioRadialSliderLayout> */ __um(WidgetLayout);                          // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0165   (0x0003)  MISSED
	FLinearColor                                       CenterBackgroundColor;                                      // 0x0168   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x0178   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x0188   (0x0010)  
	FVector2D                                          HandStartEndRatio;                                          // 0x0198   (0x0010)  
	SDK_UNDEFINED(24,1957) /* FText */                 __um(UnitsText);                                            // 0x01A8   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x01C0   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01D0   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01D1   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01D2   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01D3   (0x0001)  
	float                                              SliderThickness;                                            // 0x01D4   (0x0004)  
	FVector2D                                          OutputRange;                                                // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,1958) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x178];                                     // 0x01F8   (0x0178)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                 // [0x151c9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                          // [0x151c780] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                          // [0x151c640] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                       // [0x151c480] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                // [0x151c2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                           // [0x151c170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                    // [0x151c0d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0x151bf90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                           // [0x151bdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                             // [0x151bc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                         // [0x151bbd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                             // [0x151b420] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                  // [0x151b380] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                              // [0x151b1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                            // [0x151b090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0000 (0x000370 - 0x000370)
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0000 (0x000370 - 0x000370)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x0850 (0x000150 - 0x0009A0)
class UAudioSliderBase : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	SDK_UNDEFINED(24,1959) /* FText */                 __um(UnitsText);                                            // 0x0158   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,1960) /* FDelegateProperty */     __um(TextLabelBackgroundColorDelegate);                     // 0x0180   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x0190   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x0191   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x0192   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x0193   (0x0001)  
	SDK_UNDEFINED(16,1961) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0194   (0x0010)  
	FLinearColor                                       SliderBackgroundColor;                                      // 0x01A4   (0x0010)  
	SDK_UNDEFINED(16,1962) /* FDelegateProperty */     __um(SliderBackgroundColorDelegate);                        // 0x01B4   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x01C4   (0x0010)  
	SDK_UNDEFINED(16,1963) /* FDelegateProperty */     __um(SliderBarColorDelegate);                               // 0x01D4   (0x0010)  
	FLinearColor                                       SliderThumbColor;                                           // 0x01E4   (0x0010)  
	SDK_UNDEFINED(16,1964) /* FDelegateProperty */     __um(SliderThumbColorDelegate);                             // 0x01F4   (0x0010)  
	FLinearColor                                       WidgetBackgroundColor;                                      // 0x0204   (0x0010)  
	SDK_UNDEFINED(16,1965) /* FDelegateProperty */     __um(WidgetBackgroundColorDelegate);                        // 0x0214   (0x0010)  
	SDK_UNDEFINED(1,1966) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x0224   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0225   (0x0003)  MISSED
	SDK_UNDEFINED(16,1967) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0228   (0x0010)  
	unsigned char                                      UnknownData02_6[0x768];                                     // 0x0238   (0x0768)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                  // [0x151c900] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                          // [0x151c840] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                          // [0x151c6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                       // [0x151c560] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                // [0x151c3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                       // [0x151c220] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0x151c030] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                  // [0x151bef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                           // [0x151be50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                             // [0x151bd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                              // [0x151af00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                            // [0x151b130] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                 // [0x151af00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x0009A0 - 0x0009B0)
class UAudioSlider : public UAudioSliderBase
{ 
public:
	SDK_UNDEFINED(8,1968) /* TWeakObjectPtr<UCurveFloat*> */ __um(LinToOutputCurve);                               // 0x09A0   (0x0008)  
	SDK_UNDEFINED(8,1969) /* TWeakObjectPtr<UCurveFloat*> */ __um(OutputToLinCurve);                               // 0x09A8   (0x0008)  
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0000 (0x0009B0 - 0x0009B0)
class UAudioVolumeSlider : public UAudioSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0010 (0x0009A0 - 0x0009B0)
class UAudioFrequencySlider : public UAudioSliderBase
{ 
public:
	FVector2D                                          OutputRange;                                                // 0x09A0   (0x0010)  
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FAudioTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00D0)  
	FSlateColor                                        BackgroundColor;                                            // 0x00E0   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x0748 (0x000008 - 0x000750)
struct FAudioSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x0500)  
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0510   (0x0100)  
	FSlateBrush                                        WidgetBackgroundImage;                                      // 0x0610   (0x00D0)  
	FSlateColor                                        SliderBackgroundColor;                                      // 0x06E0   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06F4   (0x0004)  MISSED
	FVector2D                                          SliderBackgroundSize;                                       // 0x06F8   (0x0010)  
	float                                              LabelPadding;                                               // 0x0708   (0x0004)  
	FSlateColor                                        SliderBarColor;                                             // 0x070C   (0x0014)  
	FSlateColor                                        SliderThumbColor;                                           // 0x0720   (0x0014)  
	FSlateColor                                        WidgetBackgroundColor;                                      // 0x0734   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0748   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0158 (0x000008 - 0x000160)
struct FAudioRadialSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0010   (0x0100)  
	FSlateColor                                        CenterBackgroundColor;                                      // 0x0110   (0x0014)  
	FSlateColor                                        SliderBarColor;                                             // 0x0124   (0x0014)  
	FSlateColor                                        SliderProgressColor;                                        // 0x0138   (0x0014)  
	float                                              LabelPadding;                                               // 0x014C   (0x0004)  
	float                                              DefaultSliderRadius;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0154   (0x000C)  MISSED
};

